/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol THAnnotation;
@class THHighlight, AEMarginNote;

@interface THHighlightControllerCachedAnnotation : NSObject {

	id<THAnnotation> mAnnotation;
	int mLastRenderedStyle;
	THHighlight* mHighlight;
	AEMarginNote* mMarginNote;

}

@property (nonatomic,readonly) id<THAnnotation> annotation; 
@property (retain) THHighlight * highlight; 
@property (retain) AEMarginNote * marginNote; 
@property (assign,nonatomic) int lastRenderedStyle; 
-(AEMarginNote *)marginNote;
-(int)lastRenderedStyle;
-(void)setMarginNote:(AEMarginNote *)arg1 ;
-(void)updateAnnotation:(id)arg1 ;
-(char)needsMarginNoteUpdate;
-(void)setLastRenderedStyle:(int)arg1 ;
-(id<THAnnotation>)annotation;
-(THHighlight *)highlight;
-(void)setHighlight:(THHighlight *)arg1 ;
-(void)dealloc;
-(id)initWithAnnotation:(id)arg1 ;
@end

