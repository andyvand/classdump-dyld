/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKView.h>

@class WAKView;

@interface WAKClipView : WAKView {

	BOOL _copiesOnScroll;
	WAKView* _documentView;

}

@property (nonatomic,readonly) WAKView * documentView;              //@synthesize documentView=_documentView - In the implementation block
@property (assign,nonatomic) BOOL copiesOnScroll;                   //@synthesize copiesOnScroll=_copiesOnScroll - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)documentView;
-(void)setCopiesOnScroll:(BOOL)arg1 ;
-(BOOL)copiesOnScroll;
-(CGRect)documentVisibleRect;
-(void)_setDocumentView:(id)arg1 ;
@end
