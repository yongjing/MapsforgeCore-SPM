// swift-tools-version:5.6
import PackageDescription

let package = Package(
  name: "MapsforgeCore",
  platforms: [
    .iOS(.v12)
  ],
  products: [
    .library(
      name: "MapsforgeCore",
      targets: ["MapsforgeCore"]
    )
  ],
  targets: [
    .binaryTarget(
      name: "MapsforgeCore",
      path: "Binary/MapsforgeCore.xcframework"
    )
  ]
)