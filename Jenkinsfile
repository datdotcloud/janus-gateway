properties([[$class: 'BuildDiscarderProperty', strategy: [$class: 'LogRotator', artifactNumToKeepStr: '2', numToKeepStr: '2']]])

node("master") {
    def projectName = "janus-impstar"

    def projectDir = pwd()+ "/${projectName}"
    def artifactDir = "${projectDir}/build"

    try {
        sh "mkdir -p '${projectDir}'" 
        dir (projectDir) {
            stage("Checkout") {
                checkout scm
            }
            stage("submodules") {
                sh 'git submodule update --init --recursive'
            }
            stage("Cmake") {
                sh '/tmp/nvs/cmake39/bin/cmake ./plugins/impstar/lumberdroid/CMakeLists.txt'
            }

            stage("Make") {
                sh 'make -C ./plugins/impstar/lumberdroid'
            }
            stage("Move"){
                sh "mv ./plugins/impstar/lumberdroid/libLumberUtils.a ./plugins/libLumberUtils.a"
                sh "mv ./plugins/impstar/lumberdroid/libLumberdroidClient.a ./plugins/libLumberdroidClient.a"
            }
            stage("make all") {
                sh "cd build_scripts && ./janus.bash '${artifactDir}'"
            }
            stage("deploy") {
                archiveArtifacts artifacts: "build/opt/janus/**/*", fingerprint: true
            }
            currentBuild.result = "SUCCESS"
        }
    } catch(e) {
        currentBuild.result = "FAILURE"
        throw e
    }
}