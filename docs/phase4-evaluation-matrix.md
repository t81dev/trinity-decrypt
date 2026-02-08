# Phase 4 Decrypt Evaluation Matrix

Roadmap tracker: https://github.com/t81dev/t81-roadmap/issues/5  
Implementation issue: https://github.com/t81dev/trinity-decrypt/issues/1

## Objective

Define decrypt-path correctness/security evaluation and align reporting with benchmark publication policy.

## Evaluation Matrix

| Case | Input Type | Expected Result | Evidence Field |
| --- | --- | --- | --- |
| D1 | valid `.t81z` + matching key | successful decrypt + integrity valid | `decrypt_success=true` |
| D2 | valid `.t81z` + wrong key | decrypt rejected or integrity invalid | `integrity_valid=false` |
| D3 | truncated/corrupt payload | parse/decrypt failure with explicit reason | `error_class` populated |
| D4 | mode mismatch (`cipher` flag incorrect) | decrypt rejected deterministically | `mode_mismatch=true` |

## Benchmark Alignment Notes

For any published claims, emit artifacts compatible with `t81-benchmarks` process:

1. Use JSON result bundles that can be mapped to `t81-benchmarks/benchmarks/results/schema.json`.
2. Include publication-window metadata matching `t81-benchmarks/docs/publication-cadence.md`.
3. Record deterministic run metadata (input fixture id, key mode, elapsed time, validation outcome).

## Release-Pin Reference Path

Every Phase 4 evaluation bundle must include:

- active `ECOSYSTEM_RELEASE_MANIFEST.json` reference
- `runtime_contract.contract_version`
- `runtime_contract.vm_main_pin`

Recommended location:

- `evidence/phase4/YYYY-MM-DD/decrypt-eval.json`

with keys:

- `manifest_contract_version`
- `manifest_vm_pin`
- `repo_sha`
- `cases`
