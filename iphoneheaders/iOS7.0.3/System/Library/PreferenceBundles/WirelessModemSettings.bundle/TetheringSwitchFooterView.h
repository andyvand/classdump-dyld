/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class NSMutableArray;

@interface TetheringSwitchFooterView : UIView <PSHeaderFooterView> {

	NSMutableArray* _labels;

}
-(id)initWithSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setText:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 inTableView:(id)arg2 shouldSetSize:(BOOL)arg3 ;
-(float)preferredHeightForWidth:(float)arg1 inTableView:(id)arg2 ;
@end
