properties([[$class: 'BuildDiscarderProperty', strategy: [$class: 'LogRotator', artifactNumToKeepStr: '2', numToKeepStr: '2']]])

node {
    def projectName = "janus-impstar"
    
    def projectDir = pwd()+ "/${projectName}"

    try {
        sh "mkdir -p '${projectDir}'"
        dir (projectDir) {
            stage("Checkout") {
                checkout scm
            }
            stage("submodules") {
                sh 'git submodule update --init'
            }
            stage("make all") {
                sh "cd build_scripts && ./janus.bash '${projectDir}'/build"
            }
            stage("deploy") {
                archiveArtifacts artifacts: "impstar.tar", fingerprint: true
            }
            currentBuild.result = "SUCCESS"
        }
    } catch(e) {
        currentBuild.result = "FAILURE"
        throw e
    }
}