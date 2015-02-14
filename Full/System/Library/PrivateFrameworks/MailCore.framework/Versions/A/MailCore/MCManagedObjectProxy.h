/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MCChanging.h>

@class NSManagedObjectContext, NSManagedObject, NSString;

@interface MCManagedObjectProxy : NSObject <MCChanging> {

	NSManagedObjectContext* _context;
	NSManagedObject* _managedObject;
	char _isChanging;

}

@property (assign) char isChanging;                                 //@synthesize isChanging=_isChanging - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManagedObject:(id)arg1 ;
-(id)proxiedValueForKey:(id)arg1 ;
-(void)setProxiedValue:(id)arg1 forKey:(id)arg2 ;
-(char)isChanging;
-(void)_handleObjectDeletion:(id)arg1 ;
-(void)setIsChanging:(char)arg1 ;
-(void)beginChanging;
-(char)endChanging:(char)arg1 immediately:(char)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)objectID;
@end

