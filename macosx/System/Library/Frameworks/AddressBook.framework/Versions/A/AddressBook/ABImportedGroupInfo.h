/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABGroup, NSDictionary;

@interface ABImportedGroupInfo : NSObject {

	ABGroup* group;
	NSDictionary* cardRep;

}

@property (retain) ABGroup * group; 
@property (retain) NSDictionary * cardRep; 
-(ABGroup *)group;
-(NSDictionary *)cardRep;
-(void)setCardRep:(NSDictionary *)arg1 ;
-(void)dealloc;
-(void)setGroup:(ABGroup *)arg1 ;
@end

