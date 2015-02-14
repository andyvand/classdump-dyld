/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@interface RMListItem : NSObject {

	CGPDFNode* _paragraphs;
	unsigned long long _count;
	unsigned long long _pos;

}

@property (readonly) CGPDFNode* paragraphNodes;              //@synthesize paragraphs=_paragraphs - In the implementation block
@property (readonly) CGPDFPageRef page; 
-(void)addParagraph:(CGPDFNodeRef)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(CGPDFPageRef)page;
-(CGPDFNode*)paragraphNodes;
@end

