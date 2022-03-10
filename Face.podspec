Pod::Spec.new do |spec|

  spec.name         = "MNCIdentifier"
  spec.version      = "0.1.0"
  spec.summary      = "Apps that you build with our SDK work easier to using face detection for identifiying liveness."

  spec.description  = "Apps that you build with our SDK work easier to using face detection for identifiying liveness."

  spec.homepage     = "https://github.com/mncinnovation/mncidentifier-ios"

  spec.license      = { :type => "Apache License, Version 2.0", :file => "LICENSE" }

  spec.author       = { "Ihksan Sukmawan" => "ihksan.sukmawan@mncgroup.com" }

  spec.platform     = :ios
  spec.platform     = :ios, "11.0"

  spec.source       = { :git => "https://github.com/mncinnovation/mncidentifier-ios.git", :tag => "#{spec.version}"  }

  spec.vendored_frameworks = "Face.framework"
  
  spec.framework  = "UIKit"

  spec.subspec 'Face' do |ss|
    spec.dependency 'GoogleMLKit/FaceDetection', '2.3.0'
  end
  

  spec.pod_target_xcconfig = {
     'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64',
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end