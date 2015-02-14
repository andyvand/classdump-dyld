/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMObject.h>

@class WebArchive, NSString, DOMNode;

@interface DOMRange : DOMObject

@property (nonatomic,readonly) WebArchive * webArchive; 
@property (nonatomic,copy,readonly) NSString * markupString; 
@property (readonly) DOMNode * startContainer; 
@property (readonly) int startOffset; 
@property (readonly) DOMNode * endContainer; 
@property (readonly) int endOffset; 
@property (readonly) char collapsed; 
@property (readonly) DOMNode * commonAncestorContainer; 
@property (copy,readonly) NSString * text; 
-(NSString *)markupString;
-(WebArchive *)webArchive;
-(id)_text;
-(id)toString;
-(id)lineBoxRects;
-(DOMNode *)startContainer;
-(int)startOffset;
-(DOMNode *)endContainer;
-(int)endOffset;
-(char)collapsed;
-(DOMNode *)commonAncestorContainer;
-(void)setStart:(id)arg1 offset:(int)arg2 ;
-(void)setStart:(id)arg1 :(int)arg2 ;
-(void)setEnd:(id)arg1 offset:(int)arg2 ;
-(void)setEnd:(id)arg1 :(int)arg2 ;
-(void)setStartBefore:(id)arg1 ;
-(void)setStartAfter:(id)arg1 ;
-(void)setEndBefore:(id)arg1 ;
-(void)setEndAfter:(id)arg1 ;
-(void)collapse:(char)arg1 ;
-(void)selectNode:(id)arg1 ;
-(void)selectNodeContents:(id)arg1 ;
-(short)compareBoundaryPoints:(unsigned short)arg1 :(id)arg2 ;
-(void)deleteContents;
-(id)extractContents;
-(id)cloneContents;
-(void)insertNode:(id)arg1 ;
-(void)surroundContents:(id)arg1 ;
-(id)cloneRange;
-(id)createContextualFragment:(id)arg1 ;
-(char)intersectsNode:(id)arg1 ;
-(short)compareNode:(id)arg1 ;
-(short)comparePoint:(id)arg1 offset:(int)arg2 ;
-(char)isPointInRange:(id)arg1 offset:(int)arg2 ;
-(void)expand:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(CGRect)boundingBox;
-(NSString *)text;
-(short)compareBoundaryPoints:(unsigned short)arg1 sourceRange:(id)arg2 ;
-(id)textRects;
-(id)renderedImageForcingBlackText:(char)arg1 ;
-(void)detach;
@end

