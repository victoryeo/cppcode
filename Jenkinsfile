// Scripted Pipeline
pipeline  {
   agent any
   stages {
     stage('Source') {
       steps { 
         // Get some code from our Git repository
         git 'https://github.com/victoryeo/cppcode/'
       }
     }
     stage('Build') {
        steps {
            sh 'make clean'
            sh 'make'
        }
     }
     stage('Test') {
        steps {
            echo "Test"
            sh './quotient'
        }
     }
   }
}
