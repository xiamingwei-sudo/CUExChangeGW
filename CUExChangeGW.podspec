#
# Be sure to run `pod lib lint CUExChangeGW.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'CUExChangeGW'
  s.version          = '0.1.0'
  s.summary          = '即插即用SDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/xiamingwei-sudo/CUExChangeGW'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'XiaMingWei' => 'xiamwei@hotmail.com' }
  s.source           = { :git => 'https://github.com/xiamingwei-sudo/CUExChangeGW.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'
  s.vendored_frameworks         = "CUExChangeGW.framework"
  
  # local dependency
    s.dependency "CUGatewayBase"
    s.dependency "Fate/Logger"
    s.dependency "GTMBase64"
    s.dependency "swiftScan", '~> 1.2.1'
    s.dependency "MBProgressHUD"
end
