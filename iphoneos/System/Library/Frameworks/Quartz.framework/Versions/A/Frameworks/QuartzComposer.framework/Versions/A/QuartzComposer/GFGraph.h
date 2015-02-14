/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/GFNode.h>

@class GFList;

@interface GFGraph : GFNode {

	GFList* _nodes;
	GFList* _connections;
	char _finalizing;
	opaque_pthread_mutex_t* _graphLock;
	void** _unused2[3];

}
+(Class)connectionClass;
+(Class)proxyPortClass;
+(Class)baseClass;
-(void)removeNode:(id)arg1 ;
-(void)dealloc;
-(char)setState:(id)arg1 ;
-(id)state;
-(id)connections;
-(void)setUndoManager:(id)arg1 ;
-(id)_connections;
-(id)keyForConnection:(id)arg1 ;
-(char)_isNodeKeyInUse:(id)arg1 ;
-(char)_isConnectionKeyInUse:(id)arg1 ;
-(void)deleteConnectionForKey:(id)arg1 ;
-(void)deleteProxyPortForKey:(id)arg1 ;
-(id)keyForNode:(id)arg1 ;
-(id)_uniqueKeyFromNode:(id)arg1 ;
-(char)addNode:(id)arg1 forKey:(id)arg2 ;
-(id)_uniqueConnectionKey;
-(id)createConnectionFromPort:(id)arg1 toPort:(id)arg2 forKey:(id)arg3 ;
-(id)_uniqueProxyPortKeyFromPort:(id)arg1 ;
-(id)createProxyPortWithOriginalPort:(id)arg1 forKey:(id)arg2 ;
-(char)_finalizing;
-(id)_nodes;
-(void)_willDeleteNodeInputPort:(id)arg1 ;
-(void)_willDeleteNodeOutputPort:(id)arg1 ;
-(void)_layoutUpdated;
-(char)_saveState:(id)arg1 filterTarget:(id)arg2 filterAction:(SEL)arg3 flatten:(char)arg4 ;
-(char)_loadState:(id)arg1 ;
-(void)removeNodeForKey:(id)arg1 ;
-(char)canAddNode:(id)arg1 ;
-(void)setLock:(opaque_pthread_mutex_t*)arg1 ;
-(char)canCreateConnectionFromPort:(id)arg1 toPort:(id)arg2 ;
-(void)__createConnectionFrom:(id)arg1 to:(id)arg2 forKey:(id)arg3 withUserInfo:(id)arg4 ;
-(id)nodeForKey:(id)arg1 ;
-(id)pathForNode:(id)arg1 ;
-(char)canCreateProxyPortWithOriginalPort:(id)arg1 ;
-(void)deleteInputPortForKey:(id)arg1 ;
-(void)__createProxyPortWithNode:(id)arg1 portKey:(id)arg2 forKey:(id)arg3 withUserInfo:(id)arg4 ;
-(void)deleteOutputPortForKey:(id)arg1 ;
-(id)proxyPortForOriginalPort:(id)arg1 ;
-(void)enumerateNodesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)addNode:(id)arg1 ;
-(void)applyFunctionOnNodes:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)nodes;
-(void)enumerateConnectionsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)applyFunctionOnConnections:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)createConnectionFromPort:(id)arg1 toPort:(id)arg2 ;
-(void)deleteConnection:(id)arg1 ;
-(id)connectionForKey:(id)arg1 ;
-(id)nodeForPath:(id)arg1 ;
-(id)pathForPort:(id)arg1 ;
-(id)portForPath:(id)arg1 ;
-(id)createProxyPortWithOriginalPort:(id)arg1 ;
-(void)deleteProxyPortWithOriginalPort:(id)arg1 ;
-(id)proxyInputPorts;
-(id)proxyOutputPorts;
-(id)uniqueProxyPortKeyFromName:(id)arg1 ;
-(void)_setNote:(id)arg1 atIndex:(id)arg2 ;
-(Class)graphViewClass;
@end

