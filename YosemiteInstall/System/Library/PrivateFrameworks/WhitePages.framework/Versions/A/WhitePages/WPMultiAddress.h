/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABMultiValue, NSMutableArray;

@interface WPMultiAddress : NSObject {

	ABMultiValue* _abAddresses;
	NSMutableArray* _addresses;

}
+(id)multiAddressWithAddresses:(id)arg1 ;
+(id)multiAddressWithPerson:(id)arg1 ;
+(id)multiAddressWithABPerson:(id)arg1 ;
-(id)allLabels;
-(id)addressesForLabel:(id)arg1 ;
-(id)initMultiAddressWithAddresses:(id)arg1 ;
-(id)initMultiAddressWithPerson:(id)arg1 ;
-(id)initMultiAddressWithABPerson:(id)arg1 ;
-(id)allAddresses;
-(id)localizedAddressStringAtIndex:(unsigned long long)arg1 ;
-(void)replaceAddress:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

