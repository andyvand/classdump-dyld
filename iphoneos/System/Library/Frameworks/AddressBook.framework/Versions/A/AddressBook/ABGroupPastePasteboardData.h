/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface ABGroupPastePasteboardData : NSObject {

	NSDictionary* _groupsDictionary;
	NSDictionary* _peopleDictionary;

}

@property (copy,readonly) NSDictionary * groupsDictionary;              //@synthesize groupsDictionary=_groupsDictionary - In the implementation block
@property (copy,readonly) NSDictionary * peopleDictionary;              //@synthesize peopleDictionary=_peopleDictionary - In the implementation block
@property (copy,readonly) NSArray * groupUids; 
-(NSArray *)groupUids;
-(id)initWithPeopleDictionary:(id)arg1 groupsDictionary:(id)arg2 ;
-(NSDictionary *)peopleDictionary;
-(NSDictionary *)groupsDictionary;
-(void)dealloc;
-(id)initWithPasteboard:(id)arg1 ;
@end

