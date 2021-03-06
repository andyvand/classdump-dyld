/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <Messages/AnimatingTabView.h>

@interface ModifierTabView : AnimatingTabView {

	unsigned _modifierFlags[5];
	char _disabled;

}
-(void)setStandardFlags;
-(id)tabViewItemForFlags:(unsigned)arg1 ;
-(void)_updateNotification;
-(char)isDisabled;
-(void)setDisabled:(char)arg1 ;
-(void)_flagsChanged:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned*)modifierFlags;
-(void)setModifierFlags:(unsigned)arg1 ;
@end

