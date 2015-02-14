/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@interface CNContactShortNameFormatter : NSFormatter {

	unsigned long long _style;
	char _preferNickname;

}
+(id)stringFromContact:(id)arg1 ;
+(id)fallbackShortNameForContact:(id)arg1 ;
+(id)shortNameFromName:(id)arg1 ;
+(id)firstInitialShortNameForContact:(id)arg1 ;
+(id)lastInitialShortNameForContact:(id)arg1 ;
+(id)makeInitialForName:(id)arg1 ;
+(id)combineFirstName:(id)arg1 lastName:(id)arg2 order:(long long)arg3 ;
-(id)initWithStyle:(unsigned long long)arg1 preferNickname:(char)arg2 ;
-(id)stringFromContact:(id)arg1 ;
-(id)idealShortNameForContact:(id)arg1 ;
-(id)shortNameForContact:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
@end

