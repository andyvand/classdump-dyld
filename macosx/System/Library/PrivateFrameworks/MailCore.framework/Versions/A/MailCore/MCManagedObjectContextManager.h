/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface MCManagedObjectContextManager : NSObject {

	NSManagedObjectContext* _context;

}

@property (nonatomic,__weak,readonly) NSManagedObjectContext * context;              //@synthesize context=_context - In the implementation block
+(void)attachContextManagerWithOptions:(unsigned long long)arg1 toContext:(id)arg2 ;
-(void)_contextDidSave:(id)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 context:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSManagedObjectContext *)context;
@end

