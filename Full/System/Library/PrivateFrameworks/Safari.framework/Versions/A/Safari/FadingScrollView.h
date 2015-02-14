/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSScrollView.h>

@interface FadingScrollView : NSScrollView {

	char _fadingClipViewInstalled;

}

@property (nonatomic,readonly) Class clipViewClass; 
@property (assign,nonatomic) char fadingClipViewInstalled;              //@synthesize fadingClipViewInstalled=_fadingClipViewInstalled - In the implementation block
-(void)_installFadingContentView;
-(Class)clipViewClass;
-(char)fadingClipViewInstalled;
-(void)setFadingClipViewInstalled:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reflectScrolledClipView:(id)arg1 ;
-(void)awakeFromNib;
@end

