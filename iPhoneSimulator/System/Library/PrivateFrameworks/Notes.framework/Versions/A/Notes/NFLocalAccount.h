/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/NFAccount.h>

@interface NFLocalAccount : NFAccount

@property (assign,nonatomic) char migrationOffered; 
+(id)localAccountWithContext:(id)arg1 ;
-(char)updateAvailability;
-(void)awakeFromInsert;
-(void)awakeFromFetch;
-(long long)accountClassPriority;
-(id)recoveredItemsFolder;
@end

