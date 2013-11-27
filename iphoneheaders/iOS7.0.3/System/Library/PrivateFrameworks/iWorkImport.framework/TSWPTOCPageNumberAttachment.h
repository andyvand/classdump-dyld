/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextualAttachment.h>

@class NSString;

@interface TSWPTOCPageNumberAttachment : TSWPTextualAttachment {

	NSString* _pageNumber;
	NSString* _bookmarkName;

}

@property (nonatomic,copy) NSString * pageNumber;                //@synthesize pageNumber=_pageNumber - In the implementation block
@property (nonatomic,copy) NSString * bookmarkName;              //@synthesize bookmarkName=_bookmarkName - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)stringEquivalent;
-(id)stringWithPageNumber:(unsigned)arg1 pageCount:(unsigned)arg2 charIndex:(unsigned)arg3 ;
-(const TextualAttachmentArchive*)textualAttachmentArchiveFromUnarchiver:(id)arg1 ;
-(id)bookmarkName;
-(void)setBookmarkName:(id)arg1 ;
-(void)dealloc;
-(id)pageNumber;
-(void)setPageNumber:(id)arg1 ;
-(int)elementKind;
@end
