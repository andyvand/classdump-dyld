/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:11 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/TextCell.h>

@class NSImage;

@interface ImageAndTextCellOld : TextCell {

	NSImage* _image;
	CGSize _imageOffset;
	double _imagePadding;
	double _bottomPadding;

}

@property (assign,nonatomic) double bottomPadding;              //@synthesize bottomPadding=_bottomPadding - In the implementation block
+(double)defaultPaddingAfterImage;
-(void)setLeftImage:(id)arg1 ;
-(CGRect)textFrameFromCellFrame:(CGRect)arg1 ;
-(void)setPaddingAfterImage:(double)arg1 ;
-(void)setImageOffsetFromCenteredPosition:(CGSize)arg1 ;
-(void)setBottomPadding:(double)arg1 ;
-(void)_getImageFrame:(CGRect*)arg1 andTextFrame:(CGRect*)arg2 fromCellFrame:(CGRect)arg3 ;
-(CGSize)imageOffsetFromCenteredPosition;
-(double)paddingAfterImage;
-(double)bottomPadding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initTextCell:(id)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)editWithFrame:(CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5 ;
-(void)selectWithFrame:(CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6 ;
-(id)leftImage;
@end

