/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKBookshelf.bundle/Contents/MacOS/BKBookshelf
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSImageView.h>

@class NSProgressIndicator;

@interface BKSpinnerView : NSImageView {

	NSProgressIndicator* _indeterminateProgressView;

}

@property (readonly) NSProgressIndicator * indeterminateProgressView;              //@synthesize indeterminateProgressView=_indeterminateProgressView - In the implementation block
+(id)placardImage;
+(id)backgroundImage;
-(NSProgressIndicator *)indeterminateProgressView;
-(id)init;
@end

