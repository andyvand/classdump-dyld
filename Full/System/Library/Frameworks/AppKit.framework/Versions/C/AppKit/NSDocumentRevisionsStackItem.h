/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFileVersion, NSDocumentRevisionsPlaceholderView, NSDocumentRevisionsStackLayer;

@interface NSDocumentRevisionsStackItem : NSObject {

	NSFileVersion* version;
	NSDocumentRevisionsPlaceholderView* placeholderView;
	NSDocumentRevisionsStackLayer* layer;
	char hasValidSnapshot;
	char hasWindowVisible;
	char documentFailedToLoad;

}

@property (retain) NSFileVersion * version; 
@property (retain) NSDocumentRevisionsPlaceholderView * placeholderView; 
@property (retain) NSDocumentRevisionsStackLayer * layer; 
@property (assign) char hasValidSnapshot; 
@property (assign) char hasWindowVisible; 
@property (assign) char documentFailedToLoad; 
+(id)itemWithVersion:(id)arg1 ;
-(void)dealloc;
-(NSDocumentRevisionsStackLayer *)layer;
-(void)setLayer:(NSDocumentRevisionsStackLayer *)arg1 ;
-(void)setVersion:(NSFileVersion *)arg1 ;
-(NSFileVersion *)version;
-(void)_setupLayerAsPlaceholder:(char)arg1 ;
-(NSDocumentRevisionsPlaceholderView *)placeholderView;
-(void)applyParameters:(id)arg1 ;
-(void)setPlaceholderView:(NSDocumentRevisionsPlaceholderView *)arg1 ;
-(char)hasValidSnapshot;
-(void)setHasValidSnapshot:(char)arg1 ;
-(char)hasWindowVisible;
-(void)setHasWindowVisible:(char)arg1 ;
-(char)documentFailedToLoad;
-(void)setDocumentFailedToLoad:(char)arg1 ;
@end

