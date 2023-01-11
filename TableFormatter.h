#ifndef TABLEFORMATTER_H
#define TABLEFORMATTER_H

#include "Formatter.h"

namespace wikidiff2 {

class TableFormatter: public Formatter {
	public:
		void printAdd(const String& line, int leftLine, int rightLine, int offsetFrom, int offsetTo) override;
		void printDelete(const String& line, int leftLine, int rightLine, int offsetFrom, int offsetTo) override;
		void printWordDiff(
			const WordDiff & wordDiff, 
			int leftLine, int rightLine, 
			int offsetFrom, int offsetTo, 
			bool printLeft = true, bool printRight = true,
			const String & srcAnchor = "", const String & dstAnchor = "",
			bool moveDirectionDownwards = false) override;
		void printBlockHeader(int leftLine, int rightLine) override;
		void printContext(const String& input, int leftLine, int rightLine, int offsetFrom, int offsetTo) override;

	private:
		void printTextWithDiv(const String& input);
		void printWordDiffSide(const WordDiff& worddiff, bool added);
};

} // namespace wikidiff2

#endif
