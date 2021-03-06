/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMPlatformCore.framework/IMPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class NSString;

@interface IMCollectionReusableView : NSView {

	NSString* _reuseIdentifier;

}

@property (nonatomic,retain) NSString * reuseIdentifier;              //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 animated:(char)arg2 ;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(char)hasLayoutAttributes:(id)arg1 ;
-(NSString *)reuseIdentifier;
-(id)init;
-(char)isOpaque;
-(void)prepareForReuse;
@end

