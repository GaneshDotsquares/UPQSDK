#
#  Be sure to run `pod spec lint UnionPubQuizFramework.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "UnionPubQuizFramework"
  spec.version      = "1.0.0"
  spec.summary      = "A short description of UnionPubQuizFramework"
  spec.description  = "A complete description of UnionPubQuizFramework"

  spec.platform     = :ios, "11.1"

  spec.homepage     = "http://EXAMPLE/MyFramework"
  spec.license      = "MIT"
  spec.author             = { "Ganesh Gupta" => "ganesh.gupta@dotsquares.com" }
  spec.source       = { :path => '.' }
  spec.source_files  = "UnionPubQuizFramework"
  spec.exclude_files = "Classes/Exclude"
  spec.swift_version = "5" 
 spec.dependency 'SVProgressHUD'
end

