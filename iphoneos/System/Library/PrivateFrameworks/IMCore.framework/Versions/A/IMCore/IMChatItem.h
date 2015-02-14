/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/NSCopying.h>

@class IMItem;

@interface IMChatItem : NSObject <NSCopying> {

	IMItem* _item;

}

@property (nonatomic,readonly) char canDelete; 
-(char)canDelete;
-(id)_initWithItem:(id)arg1 ;
-(id)_timeStale;
-(id)_timeAdded;
-(void)_setTimeAdded:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_item;
@end

