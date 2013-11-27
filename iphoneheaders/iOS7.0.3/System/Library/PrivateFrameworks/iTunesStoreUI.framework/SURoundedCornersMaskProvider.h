/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUMaskProvider.h>

@interface SURoundedCornersMaskProvider : SUMaskProvider {

	float _cornerRadius;

}

@property (assign,nonatomic) float cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(float)cornerRadius;
-(void)setCornerRadius:(float)arg1 ;
-(CGPathRef)copyPathForMaskWithSize:(CGSize)arg1 ;
@end
