/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABRecordContext, ABGroup, NSString;

@interface ABGroupDragSource : NSObject {

	ABRecordContext* _recordContext;
	ABGroup* _group;
	NSString* _entryIdentifier;
	NSString* _name;

}

@property (readonly) ABRecordContext * recordContext;              //@synthesize recordContext=_recordContext - In the implementation block
@property (readonly) ABGroup * group;                              //@synthesize group=_group - In the implementation block
@property (readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (readonly) NSString * entryIdentifier;                   //@synthesize entryIdentifier=_entryIdentifier - In the implementation block
-(ABGroup *)group;
-(id)initWithRecordContext:(id)arg1 group:(id)arg2 name:(id)arg3 entryIdentifier:(id)arg4 ;
-(ABRecordContext *)recordContext;
-(NSString *)entryIdentifier;
-(void)dealloc;
-(NSString *)name;
@end
