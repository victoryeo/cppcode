// Scripted Pipeline
node ('master') {
     stage('Source') {
         // Get some code from our Git repository
         git 'https://github.com/victoryeo/cppcode/'
     }
     stage('Build') {
            sh 'make'
     }
     stage('Test') {
            echo "Test"
            sh './quotient'
     }
}
