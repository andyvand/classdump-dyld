/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class IMFourStateImageButton, NSTextField;

@interface BKHeaderViewController : NSViewController {

	IMFourStateImageButton* _headerField;
	NSTextField* _subHeaderField;

}

@property (retain) IMFourStateImageButton * headerField;              //@synthesize headerField=_headerField - In the implementation block
@property (retain) NSTextField * subHeaderField;                      //@synthesize subHeaderField=_subHeaderField - In the implementation block
-(void)setTocTitle:(id)arg1 ;
-(void)setSubHeaderField:(NSTextField *)arg1 ;
-(void)setHeaderField:(IMFourStateImageButton *)arg1 ;
-(IMFourStateImageButton *)headerField;
-(NSTextField *)subHeaderField;
-(void)setTitle:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

