/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <Notes/MCPersistedAccount.h>

@class NSString, ACAccountCredential, NFFolder, NFTrashFolder, NSArray;

@interface NFAccount : NSManagedObject <MCPersistedAccount>

@property (readonly) char participatesInInternetAccounts; 
@property (readonly) NSString * folderEntityName; 
@property (assign,nonatomic) char allowInsecureAuthentication; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (assign,nonatomic) char enabled; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,retain) NFFolder * rootFolder; 
@property (nonatomic,retain) NFTrashFolder * trashFolder; 
@property (nonatomic,__weak,readonly) NFFolder * defaultFolder; 
@property (nonatomic,__weak,readonly) NSArray * allFolders; 
@property (nonatomic,readonly) long long accountClassPriority; 
@property (nonatomic,readonly) char isAOSAccount; 
@property (nonatomic,copy,readonly) NSString * internetAccountsUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,copy) NSString * canonicalEmailAddress; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,retain) ACAccountCredential * credential; 
+(void)setDefaultAccount:(id)arg1 ;
+(id)_initialDefaultAccountWithContext:(id)arg1 ;
+(id)resetDefaultAccount:(id)arg1 ;
+(id)allEnabledAccountsWithContext:(id)arg1 ;
+(id)allAccountsWithContext:(id)arg1 ;
+(id)accountWithInternetAccountsUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)accountWithEmailAddress:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)defaultAccountWithContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingDefaultFolder;
-(ACAccountCredential *)credential;
-(void)setCredential:(ACAccountCredential *)arg1 ;
-(char)hasNotes;
-(void)setCanonicalEmailAddress:(NSString *)arg1 ;
-(NSString *)canonicalEmailAddress;
-(NSString *)identifier;
-(void)awakeFromInsert;
-(char)participatesInInternetAccounts;
-(long long)accountClassPriority;
-(NSString *)folderEntityName;
-(id)createDefaultFolderInContext:(id)arg1 ;
-(char)isAOSAccount;
-(NFFolder *)defaultFolder;
-(NSArray *)allFolders;
-(NSString *)internetAccountsUID;
@end

