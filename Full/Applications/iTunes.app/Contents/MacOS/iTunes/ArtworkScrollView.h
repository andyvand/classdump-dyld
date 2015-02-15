/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:12:56 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/iTunes.app/Contents/MacOS/iTunes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <AppKit/NSScrollView.h>

@class ArtworkControlView;

@interface ArtworkScrollView : NSScrollView {

	ArtworkControlView* artworkControlView;

}

@property (assign) ArtworkControlView * artworkControlView; 
-(void)registerForDrag;
-(char)scrollThePageUp;
-(char)scrollThePageDown;
-(ArtworkControlView *)artworkControlView;
-(void)setArtworkControlView:(ArtworkControlView *)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)awakeFromNib;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
@end
