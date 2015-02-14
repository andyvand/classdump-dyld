/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSMutableCopying.h>
#import <Foundation/NSSecureCoding.h>
#import <Foundation/NSPasteboardReading.h>
#import <Foundation/NSPasteboardWriting.h>

@class NSString;

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSPasteboardReading, NSPasteboardWriting>

@property (readonly) char containsFileTransfers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CGSize size; 
@property (copy,readonly) NSString * string; 
+(id)_osa_attributedReturnString;
+(id)_osa_attributedTabString;
+(id)inlineLinkAttributedString:(id)arg1 target:(id)arg2 ;
+(id)attributedStringWithString:(id)arg1 enabled:(char)arg2 ;
+(id)_attributedStringWithData:(id)arg1 MIMEType:(id)arg2 ;
+(id)inputLineStringStoredIn:(id)arg1 ;
+(id)hyperlinkFromString:(id)arg1 font:(id)arg2 withURL:(id)arg3 lineBreakMode:(unsigned long long)arg4 ;
+(id)hyperlinkFromString:(id)arg1 withURL:(id)arg2 ;
+(id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 attributes:(id)arg3 ;
+(id)boldGrayHeaderAttributes;
+(id)headerAttributes;
+(id)fixedPitchAttributes;
+(double)headerFontSize;
+(void)resetMimeHeaderAttributes;
+(char)abIsBlank:(id)arg1 ;
+(id)_ab_attributedStringWithString:(id)arg1 ;
+(id)abAttributedAlertStringWithString:(id)arg1 ;
+(id)attributedStringWithAttachment:(id)arg1 ;
+(id)textUnfilteredFileTypes;
+(id)textPasteboardTypes;
+(id)textUnfilteredPasteboardTypes;
+(id)textFileTypes;
+(id)readableTypesForPasteboard:(id)arg1 ;
+(unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2 ;
+(id)textUnfilteredTypes;
+(id)textTypes;
+(id)writableTextFileTypesForDocumentTypes;
+(id)_documentTypeForFileType:(id)arg1 ;
+(id)attributedStringWithAttachment:(id)arg1 ;
+(void)_setAttributedDictionaryClass:(Class)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
-(NSRange)rangeOfAttachment:(id)arg1 ;
-(id)stringIncludingAttachments;
-(id)stringIncludingAttachmentsAsArray;
-(id)stringWithRange:(NSRange)arg1 formattedWithURL:(id)arg2 withColor:(id)arg3 andUnderline:(char)arg4 ;
-(id)stringWithURLsFormattedAsAppSpecificHyperlinksWithColor:(id)arg1 andUnderline:(char)arg2 ;
-(id)stringWithOneURLFormattedAsAppSpecificHyperlinkWithColor:(id)arg1 andUnderline:(char)arg2 ;
-(id)stringWithURLsFormattedAsHyperlinksWithColor:(id)arg1 andUnderline:(char)arg2 ;
-(id)inlineButtonTitleAttributedString;
-(id)inputLineAttributedStringGivenTranscriptStyleID:(id)arg1 ;
-(id)storableFormat;
-(char)containsFileTransfers;
-(char)isd_isEqualToAttributedString:(id)arg1 ;
-(id)attributedStringByIncrementingIndentBy:(float)arg1 ;
-(id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2 ;
-(id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 ;
-(id)messageDataForRange:(NSRange)arg1 ;
-(char)containsRichText;
-(char)containsRichTextInRange:(NSRange)arg1 ;
-(id)enrichedString;
-(void)getFormatFlowedString:(id*)arg1 insertedTrailingSpaces:(char*)arg2 encoding:(unsigned long long)arg3 ;
-(void)getQuotedString:(id*)arg1 encoding:(unsigned long long)arg2 ;
-(void)getMetrics:(SCD_Struct_NS5*)arg1 containerSize:(CGSize)arg2 wrap:(char)arg3 alignment:(unsigned long long)arg4 tagOffset:(double)arg5 ;
-(CGSize)IKSizeOfTextForWidth:(float)arg1 textView:(id)arg2 ;
-(id)_attachmentFileWrapperDescription:(char)arg1 ;
-(id)URLAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2 ;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(id)attachments;
-(id)RTFFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(id)RTFDFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(id)RTFDFileWrapperFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(id)docFormatFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(CGRect)_drawCenteredVerticallyInRect:(CGRect)arg1 options:(unsigned long long)arg2 scrollable:(char)arg3 styledTextOptions:(id)arg4 referenceView:(id)arg5 ;
-(CGSize)_sizeWithSize:(CGSize)arg1 ;
-(CGRect)_drawCenteredVerticallyInRect:(CGRect)arg1 ;
-(CGRect)_drawCenteredVerticallyInRect:(CGRect)arg1 scrollable:(char)arg2 styledTextOptions:(id)arg3 ;
-(id)defaultLanguage;
-(id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(id)RTFFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(NSRange)doubleClickAtIndex:(unsigned long long)arg1 inRange:(NSRange)arg2 ;
-(NSRange)doubleClickAtIndex:(unsigned long long)arg1 ;
-(NSRange)rangeOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSRange)rangeOfTextBlock:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)dataFromRange:(NSRange)arg1 documentAttributes:(id)arg2 error:(id*)arg3 ;
-(id)fileWrapperFromRange:(NSRange)arg1 documentAttributes:(id)arg2 error:(id*)arg3 ;
-(id)RTFDFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(id)RTFDFileWrapperFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(id)docFormatFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(id)initWithRTFD:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithRTF:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithHTML:(id)arg1 documentAttributes:(id*)arg2 ;
-(char)containsAttachments;
-(id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(NSRange)arg1 ;
-(unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(NSRange)arg2 ;
-(unsigned long long)lineBreakByHyphenatingBeforeIndex:(unsigned long long)arg1 withinRange:(NSRange)arg2 ;
-(unsigned long long)nextWordFromIndex:(unsigned long long)arg1 forward:(char)arg2 ;
-(id)initWithURL:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithPath:(id)arg1 documentAttributes:(id*)arg2 ;
-(NSRange)rangeOfTextList:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)fontAttributesInRange:(NSRange)arg1 ;
-(id)rulerAttributesInRange:(NSRange)arg1 ;
-(NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(char)_isStringDrawingTextStorage;
-(long long)itemNumberInTextList:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(char)_atStartOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(char)_atEndOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(char)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(char)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(NSRange)arg2 usesAlternativeBreaker:(char)arg3 ;
-(id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id*)arg3 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 ;
-(NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 completeRow:(char*)arg3 ;
-(void)_readDocumentFragment:(id)arg1 fromRange:(NSRange)arg2 documentAttributes:(id)arg3 subresources:(id*)arg4 ;
-(id)_documentFromRange:(NSRange)arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id*)arg4 ;
-(id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithDocFormat:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 ;
-(id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id*)arg3 ;
-(id)_initWithDOMRange:(id)arg1 ;
-(CGRect)boundingRectWithSize:(CGSize)arg1 options:(unsigned long long)arg2 ;
-(void)drawWithRect:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(CGRect)boundingRectWithSize:(CGSize)arg1 options:(unsigned long long)arg2 context:(id)arg3 ;
-(id)_ui_attributedSubstringFromRange:(NSRange)arg1 scaledByScaleFactor:(double)arg2 ;
-(void)drawWithRect:(CGRect)arg1 options:(unsigned long long)arg2 context:(id)arg3 ;
-(id)_ui_attributedSubstringFromRange:(NSRange)arg1 withTrackingAdjustment:(double)arg2 ;
-(CGSize)size;
-(void)drawInRect:(CGRect)arg1 ;
-(void)drawAtPoint:(CGPoint)arg1 ;
-(char)attribute:(id)arg1 existsInRange:(NSRange)arg2 ;
-(id)trimmedString;
-(id)dd_attributedSubstringFromRange:(NSRange)arg1 ;
-(id)dd_attributedStringByAppendingAttributedString:(id)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 replacingCharactersInRanges:(const NSRange*)arg2 numberOfRanges:(long long)arg3 withString:(id)arg4 ;
-(id)attributedStringByWeaklyAddingAttributes:(id)arg1 ;
-(char)_attributesAreEqualToAttributesInAttributedString:(id)arg1 ;
-(char)scriptingIsEqualTo:(id)arg1 ;
-(char)scriptingIsLessThanOrEqualTo:(id)arg1 ;
-(char)scriptingIsLessThan:(id)arg1 ;
-(char)scriptingIsGreaterThanOrEqualTo:(id)arg1 ;
-(char)scriptingIsGreaterThan:(id)arg1 ;
-(char)scriptingBeginsWith:(id)arg1 ;
-(char)scriptingEndsWith:(id)arg1 ;
-(char)scriptingContains:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)_createAttributedSubstringWithRange:(NSRange)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)length;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(char)isEqualToAttributedString:(id)arg1 ;
-(void)enumerateAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateAttributesInRange:(NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
@end

