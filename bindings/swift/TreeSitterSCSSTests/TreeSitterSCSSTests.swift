import XCTest
import SwiftTreeSitter
import TreeSitterScss

final class TreeSitterScssTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_scss())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading SCSS grammar")
    }
}
