/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PubSub.framework/Versions/A/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PubSub/PubSub-Structs.h>
@class NSString, NSURL, ABPerson;

@interface PSAuthor : NSObject {

	id _internal;

}

@property (retain,readonly) NSString * name; 
@property (retain,readonly) NSString * email; 
@property (retain,readonly) NSURL * URL; 
@property (retain) ABPerson * person; 
-(id)_initWithCore:(AuthorCore*)arg1 ;
-(id)nameForDisplay;
-(id)initWithName:(id)arg1 email:(id)arg2 URL:(id)arg3 ;
-(id)addressBookUID;
-(void)_addToDatabase;
-(void)setAddressBookUID:(id)arg1 ;
-(AuthorCore*)_authorCore;
-(id)initWithPerson:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSURL *)URL;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSString *)email;
-(ABPerson *)person;
-(void)setPerson:(ABPerson *)arg1 ;
@end

