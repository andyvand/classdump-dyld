/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, ABAccount, NSArray;


@protocol ABAccountCollection <NSObject>
@property (copy,readonly) NSString * basePath; 
@property (readonly) ABAccount * defaultAccount; 
@property (copy,readonly) NSArray * allAccounts; 
@property (copy,readonly) NSArray * enabledAccounts; 
@property (copy,readonly) NSArray * persistentAccounts; 
@required
-(ABAccount *)defaultAccount;
-(NSArray *)persistentAccounts;
-(NSString *)basePath;
-(NSArray *)enabledAccounts;
-(NSArray *)allAccounts;
-(void)setTag:(id)arg1;
-(id)tag;
-(id)accountWithIdentifier:(id)arg1;

@end

