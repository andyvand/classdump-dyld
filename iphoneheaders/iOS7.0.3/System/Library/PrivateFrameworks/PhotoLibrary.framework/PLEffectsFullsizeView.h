/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLGLView.h>

@class CIFilter;

@interface PLEffectsFullsizeView : PLGLView {

	CIFilter* _selectedFilter;
	unsigned _selectedFilterIndex;
	unsigned _filterIndex;

}

@property (assign) unsigned filterIndex;              //@synthesize filterIndex=_filterIndex - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)renderPixelBuffer:(CVBufferRef)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3 ;
-(void)setFixedSize:(CGSize)arg1 ;
-(unsigned)filterIndex;
-(void)_renderWithInputImage:(id)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3 ;
-(id)_updateSelectedFilter;
-(void)_layoutGLLayer;
-(void)setFilterIndex:(unsigned)arg1 ;
@end
