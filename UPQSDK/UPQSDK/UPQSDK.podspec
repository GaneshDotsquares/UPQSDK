#
#  Be sure to run `pod spec lint UPQSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|
 

  spec.name         = "UPQSDK"
  spec.version      = "1.0"
  spec.summary      = "A short description of UPQSDK."
  spec.description  = "A complete description of UPQSDK"
 
 spec.platform     = :ios, "11.1"

  spec.homepage     = "http://EXAMPLE/UPQSDK"
  spec.license      = "MIT"
  spec.author               = { "Ganesh" => "ganesh.gupta@dotsquares.com" }
  spec.source       = { :git => "https://github.com/GaneshDotsquares/DemoSDK.git" }
  spec.source_files  = "UPQSDK"
  #spec.exclude_files = "Classes/Exclude"
 # spec.preserve_paths = "FilesToSave", "MoreFilesToSave"
 # spec.libraries = "iconv", "xml2"
  spec.swift_version = "4.2" 
  spec.dependency = 'Socket.IO-Client-Swift', '14.0'
  spec.dependency  'SVProgressHUD'


end
