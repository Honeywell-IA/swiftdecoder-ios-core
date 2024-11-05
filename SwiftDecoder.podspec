Pod::Spec.new do |spec|
  spec.name               = "SwiftDecoder"
  spec.version            = "6.0.11"
  spec.platform = :ios, '13.0'
  spec.ios.deployment_target = '13.0'
  spec.summary            = "SwiftDecoder"
  spec.description        = "Honeywell Barcode Scanning SDK"
  spec.homepage           = "https://www.honeywell.com/us/en"
  spec.documentation_url  = "https://www.honeywell.com/us/en"
  spec.author             = { "Honeywell" => "SwiftDecoder-Team" }
  spec.source            = { 
	:git => "https://github.com/Honeywell-IA/swiftdecoder-ios-core.git",
      	:tag => "6.0.11"
}
spec.vendored_frameworks = 'SwiftDecoder.xcframework'
end