// Scripted Pipeline
node ('master') {
     stage('Source') {
         // Get some code from our Git repository
         git 'https://github.com/victoryeo/cppcode/'
     }
    stages {
     stage('Build') {
        steps {
            sh 'make'
        }
     }
     stage('Test') {
        steps {
            echo "Test"
        }
     }
    }
}
