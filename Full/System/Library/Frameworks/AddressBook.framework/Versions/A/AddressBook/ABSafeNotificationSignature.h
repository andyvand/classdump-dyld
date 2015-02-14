/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABSafeNotificationSignature.h>

@protocol ABSafeNotificationSignature <NSObject,NSCopying>
@required
-(unsigned long long)signatureCode;
-(void)startObservingWithTarget:(id)arg1 selector:(SEL)arg2;
-(void)stopObservingWithTarget:(id)arg1;
-(id)copy;
-(id)name;
-(id)object;

@end


@class NSNotificationCenter, NSString;

@interface ABSafeNotificationSignature : NSObject <ABSafeNotificationSignature> {

	NSNotificationCenter* _center;
	NSString* _name;
	id _object;

}

@property (retain) NSNotificationCenter * center;                   //@synthesize center=_center - In the implementation block
@property (copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign) id object;                                       //@synthesize object=_object - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)signatureCodeForName:(id)arg1 object:(id)arg2 ;
-(id)initWithNotificationCenter:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(unsigned long long)signatureCode;
-(void)startObservingWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)stopObservingWithTarget:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)object;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNotificationCenter *)center;
-(void)setObject:(id)arg1 ;
-(void)setCenter:(NSNotificationCenter *)arg1 ;
@end

