/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSCharacterSet;

@interface CPSearchManager : NSObject {

	NSString* _lastSearchString;
	NSCharacterSet* _whiteSpaceSet;
	unsigned long long _transactionID;

}
+(id)sharedSearchManager;
-(void)searchForCharactersWithSearchString:(id)arg1 maxCount:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)infoForCharcater:(id)arg1 infoTag:(id)arg2 ;
-(void)setLastSearchedString:(id)arg1 ;
-(void)dealloc;
@end

