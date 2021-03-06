/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABSearchOperationsFactory;
@class NSString;

@interface ABAccountDirectory : NSObject {

	NSString* _identifier;
	NSString* _name;
	id<ABSearchOperationsFactory> _searchOperationsFactory;

}

@property (copy,readonly) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (readonly) id<ABSearchOperationsFactory> searchOperationsFactory;              //@synthesize searchOperationsFactory=_searchOperationsFactory - In the implementation block
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 searchOperationsFactory:(id)arg3 ;
-(id<ABSearchOperationsFactory>)searchOperationsFactory;
-(void)dealloc;
-(NSString *)name;
-(NSString *)identifier;
@end

