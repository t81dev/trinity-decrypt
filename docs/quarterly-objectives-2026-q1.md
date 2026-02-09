# Trinity-Decrypt Quarterly Objectives (2026 Q1)

Roadmap tracker: https://github.com/t81dev/t81-roadmap/issues/22
Repo Phase 4 issue: https://github.com/t81dev/trinity-decrypt/issues/1

## Objective 1: Decrypt Matrix Automation

- Deliverable: run D1-D4 matrix from `docs/phase4-evaluation-matrix.md` in a reproducible batch.
- Acceptance checks:
  - artifact `evidence/phase4/YYYY-MM-DD/decrypt-eval.json` contains results for D1-D4.
  - each case records deterministic `error_class` or success marker fields.

## Objective 2: Benchmark-Compatible Reporting

- Deliverable: result format aligned with `t81-benchmarks` publication constraints.
- Acceptance checks:
  - artifact includes elapsed time and validation outcome per case.
  - metadata includes `manifest_contract_version`, `manifest_vm_pin`, and repo SHA.

## Objective 3: Monthly Evidence Rhythm

- Deliverable: at least one monthly evidence refresh tied to active runtime baseline.
- Acceptance checks:
  - roadmap status entry links the latest artifact path.
  - freshness age for repo issue evidence remains below threshold.
