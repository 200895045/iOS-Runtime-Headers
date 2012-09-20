/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, GKInviteInternal, GKPlayer, NSData;

@interface GKInvite : NSObject  {
    GKPlayer *_invitingPlayer;
    GKInviteInternal *_internal;
    BOOL _cancelled;
}

@property(readonly) NSString * inviter;
@property(getter=isHosted,readonly) BOOL hosted;
@property(readonly) unsigned int playerGroup;
@property(readonly) unsigned int playerAttributes;
@property(retain) GKInviteInternal * internal;
@property(readonly) NSString * inviteID;
@property(readonly) NSData * sessionToken;
@property(readonly) NSString * message;
@property(readonly) BOOL isNearby;
@property(readonly) GKPlayer * invitingPlayer;
@property(getter=isCancelled) BOOL cancelled;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;

- (id)invitingPlayer;
- (BOOL)isHosted;
- (id)inviter;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)setInternal:(id)arg1;
- (id)internal;
- (id)description;
- (BOOL)respondsToSelector:(SEL)arg1;
- (unsigned int)hash;
- (BOOL)isCancelled;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setCancelled:(BOOL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end