/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessageChatItem.h>

@class NSAttributedString;

@interface IMMessagePartChatItem : IMMessageChatItem {

	NSAttributedString* _text;
	long long _index;

}

@property (nonatomic,copy,readonly) NSAttributedString * text;              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long index;                               //@synthesize index=_index - In the implementation block
+(id)_newMessagePartsForMessageItem:(id)arg1 ;
+(id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2 ;
-(void)setIndex:(long long)arg1 ;
-(char)canDelete;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 ;
-(void)dealloc;
-(id)description;
-(long long)index;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)text;
@end

