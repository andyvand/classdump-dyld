/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:22 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSAttributedString, NSDictionary, NSMutableString, NSFileWrapper, NSZipFileArchive;

@interface NSWordMLWriter : NSObject {

	NSAttributedString* _attrStr;
	NSDictionary* _documentAttrs;
	NSMutableString* _documentStr;
	NSFileWrapper* _fileWrapper;
	NSZipFileArchive* _archive;

}
-(id)archive:(id)arg1 contentsForEntryName:(id)arg2 ;
-(id)archive:(id)arg1 propertiesForEntryName:(id)arg2 ;
-(void)dealloc;
-(id)fileWrapper;
-(id)initWithAttributedString:(id)arg1 ;
-(void)setDocumentAttributes:(id)arg1 ;
-(id)docxFormatData;
-(id)XMLFormatData;
-(id)zipFileArchive;
-(char)_isWordML;
-(void)_writeDocumentProperties;
-(void)_writeFonts;
-(void)_writeDocumentAttributes;
-(void)_writeParagraphStyle:(id)arg1 ;
-(void)_writeCharacterAttributes:(id)arg1 ;
-(id)_coreProperties;
-(id)_appProperties;
-(id)_metaProperties;
-(void)_generateDocument;
@end

