/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSAppleEventDescriptor;

@interface ABScriptedCardActionRequestBuilder : NSObject {

	NSAppleEventDescriptor* _descriptor;

}
+(id)builderWithEventClass:(unsigned)arg1 eventID:(unsigned)arg2 ;
-(id)build;
-(void)addParameter:(id)arg1 keyword:(unsigned)arg2 ;
-(id)initWithEventClass:(unsigned)arg1 eventID:(unsigned)arg2 ;
-(id)descriptorWithObject:(id)arg1 ;
-(void)dealloc;
@end

