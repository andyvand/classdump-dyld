/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface ABTableEntry : NSObject {

	NSMutableArray* _children;

}

@property (copy,readonly) NSString * recordIdentifier; 
@property (nonatomic,retain) NSMutableArray * children;              //@synthesize children=_children - In the implementation block
-(char)canSelect;
-(char)canDrag;
-(id)init;
-(void)dealloc;
-(NSMutableArray *)children;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(char)hasChildren;
-(NSString *)recordIdentifier;
@end

