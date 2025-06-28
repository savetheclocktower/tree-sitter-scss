// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterScss",
    products: [
        .library(name: "TreeSitterScss", targets: ["TreeSitterScss"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterScss",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterScssTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterScss",
            ],
            path: "bindings/swift/TreeSitterScssTests"
        )
    ],
    cLanguageStandard: .c11
)
