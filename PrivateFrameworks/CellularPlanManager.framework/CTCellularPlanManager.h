/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanManager : NSObject <CTCellularPlanClientDelegate> {
    NSXPCConnection *_connection;
    NSData *_cookieData;
    NSString *_lastSessionId;
    struct dispatch_queue_s { } *_queue;
    NSMutableArray *_subscriptionCompletions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void)_connect_sync;
- (void)_ensureConnected_sync;
- (void)_plansForRenewal:(BOOL)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3 latitude:(id)arg4 longitude:(id)arg5;
- (void)_reconnect;
- (void)_subscriptionDetailsWithCompletion:(id /* block */)arg1 updateIfNeeded:(BOOL)arg2;
- (void)carrierHandoffToken:(id /* block */)arg1;
- (void)connectionSettings:(id /* block */)arg1;
- (void)dealloc;
- (void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(BOOL)arg2;
- (void)getCurrentPlanType:(id /* block */)arg1;
- (void)getDeviceInfo:(id /* block */)arg1;
- (void)getIMEIPrefix:(id /* block */)arg1;
- (void)getSelectedEnv:(id /* block */)arg1;
- (void)getSelectedProxy:(id /* block */)arg1;
- (id)init;
- (void)isNewDataPlanCapable:(id /* block */)arg1;
- (void)openInternalUrlId:(int)arg1;
- (void)plansForRenewalWithCompletion:(id /* block */)arg1;
- (void)plansForRenewalWithProgress:(id /* block */)arg1 andCompletion:(id /* block */)arg2;
- (void)plansWithCompletion:(id /* block */)arg1;
- (void)plansWithCompletion:(id /* block */)arg1 latitude:(id)arg2 longitude:(id)arg3;
- (void)plansWithProgress:(id /* block */)arg1 andCompletion:(id /* block */)arg2;
- (void)setActivePlan:(id)arg1 completion:(id /* block */)arg2;
- (void)setIMEIPrefix:(id)arg1;
- (void)setSelectedEnv:(int)arg1;
- (void)setSelectedProxy:(int)arg1;
- (void)setUserInPurchaseFlow:(BOOL)arg1;
- (void)subscriptionDetailsDidUpdate:(id)arg1;
- (void)subscriptionDetailsForCompletion:(id)arg1;
- (void)subscriptionDetailsRequestDidFail:(id)arg1;
- (void)subscriptionDetailsWithCompletion:(id /* block */)arg1;

@end
